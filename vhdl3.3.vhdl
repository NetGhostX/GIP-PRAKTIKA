library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity akkumulator is
    port(
        data_in  : in  std_logic_vector(3 downto 0); -- Daten-Eingang
        load     : in  std_logic;                   -- MUX Steuereingang
        sub      : in  std_logic;                   -- 0=+, 1=-
        enable   : in  std_logic;                   -- enable Auffangregister
        clock    : in  std_logic;                   -- Takt
        carry_out: out std_logic;                   -- carry out
        data_out : out std_logic_vector(3 downto 0)  -- Daten-Ausgang
    );
end entity akkumulator;

architecture behavioral of akkumulator is
    signal reg_data : std_logic_vector(3 downto 0);
begin
    -- register for data storage
    process(clock) begin
        if rising_edge(clock) then
            if enable = '1' then
                if load = '1' then
                    reg_data <= data_in;
                elsif sub = '1' then
                    reg_data <= reg_data - data_in;
                else
                    reg_data <= reg_data + data_in;
                end if;
            end if;
        end if;
    end process;
    data_out <= reg_data;

    -- carry out logic
    process(reg_data) begin
        if reg_data = "0000" then
            carry_out <= '0';
        else
            carry_out <= '1';
        end if;
    end process;
end architecture behavioral;
    
    
    
    
    
    
    
    
    
    library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity akkumulator is
port (
    d : in std_logic_vector(3 downto 0); -- Daten-Eingang
    ld : in std_logic; -- MUX Steuereingang: 0(gedrückt)=Ergebnis
    durchschalten, 1(nicht gedrückt)= Daten
    eingang durchschalten
    sub : in std_logic; -- 0=+, 1=-
    e : in std_logic; -- enable Auffangregister 0(gedrückt)=
    enabled
    clk : in std_logic; -- Takt
    c : out std_logic; -- LEDG(4) carry out
    q : out std_logic_vector(3 downto 0); -- LEDG(3..0)
    Daten-Ausgang
    -- debug pins:
    z_out : out std_logic_vector(4 downto 0) -- LEDR(4..0),
    z4 = carry
);
end entity akkumulator;

architecture behavior of akkumulator is
    signal accumulator_reg : signed(3 downto 0); -- internal register for the accumulator
    signal neg_d : std_logic_vector(3 downto 0); -- two's complement of input d
begin
    neg_d <= std_logic_vector(not d + '1'); -- two's complement of input d
    process(clk)
    begin
        if rising_edge(clk) then
            if ld = '1' then -- load data into accumulator
                accumulator_reg <= signed(d);
            elsif e = '1' then -- enable add/sub operation
                if sub = '0' then -- addition operation
                    accumulator_reg <= accumulator_reg + signed(d);
                else -- subtraction operation
                    accumulator_reg <= accumulator_reg + signed(neg_d);
                end if;
            end if;
        end if;
    end process;

    -- output logic
    c <= accumulator_reg(3); -- carry out
    q <= std_logic_vector(accumulator_reg); -- data output
    z_out <= std_logic_vector(accumulator_reg & '0'); -- debug output
end architecture behavior;

