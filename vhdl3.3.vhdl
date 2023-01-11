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
