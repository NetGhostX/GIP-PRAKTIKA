#start structs with a constructor
using Dates

struct Address
    street::String
    zipcode::String
    town::String
    state::String
    country::String

    Address(street::String, zipcode::String, town::String, state::String, country::String) = new(street, zipcode, town, state, country)
end

struct Customer
    name::String
    address::Address
    email::String

    Customer(name::String, address::Address, email::String) = new(name, address, email)
end

struct Product
    manufacturer::String
    name::String
    id::String
    description::String
    price::Float64

    Product(manufacturer::String, name::String, id::String, description::String, price::Float64) = new(manufacturer, name, id, description, price)
end

struct Order
    product::Product
    quantity::Int
    customer::Customer
    date::DateTime

    Order(product::Product, quantity::Int, customer::Customer, date::DateTime) = new(product, quantity, customer, date)
end

println("Enter the street:")
street = readline()
println("Enter the zipcode:")
zipcode = readline()
println("Enter the town:")
town = readline()
println("Enter the state:")
state = readline()
println("Enter the country:")
country = readline()

address = Address(street, zipcode, town, state, country)

println("Enter the name:")
name = readline()
println("Enter the email:")
email = readline()

customer = Customer(name, address, email)

println("Enter the manufacturer:")
manufacturer = readline()
println("Enter the product name:")
product_name = readline()
println("Enter the product id:")
product_id = readline()
println("Enter the product description:")
product_description = readline()
println("Enter the product price:")
price = parse(Float64, readline())

product = Product(manufacturer, product_name, product_id, product_description, price)

println("Enter the quantity:")
quantity = parse(Int, readline())

order = Order(product, quantity, customer, now())

print_order(order)


address = Address("1234 Main St", "12345", "Anytown", "Anystate", "USA")
customer = Customer("Acme Inc", address, "acme@example.com")
product = Product("ACME Corp", "Widget", "W123", "A simple widget", 9.99)
order = Order(product, 10, customer, now())
  # end structs with a constructor


#Start with user defined inputs 

using Dates

struct Address
    street::String
    zipcode::String
    town::String
    state::String
    country::String

    Address(street::String, zipcode::String, town::String, state::String, country::String) = new(street, zipcode, town, state, country)
end

struct Customer
    name::String
    address::Address
    email::String

    Customer(name::String, address::Address, email::String) = new(name, address, email)
end

struct Product
    manufacturer::String
    name::String
    id::String
    description::String
    price::Float64

    Product(manufacturer::String, name::String, id::String, description::String, price::Float64) = new(manufacturer, name, id, description, price)
end

struct Order
    product::Product
    quantity::Int
    customer::Customer
    date::DateTime

    Order(product::Product, quantity::Int, customer::Customer, date::DateTime) = new(product, quantity, customer, date)
end

println("Enter the street:")
street = readline()
println("Enter the zipcode:")
zipcode = readline()
println("Enter the town:")
town = readline()
println("Enter the state:")
state = readline()
println("Enter the country:")
country = readline()

address = Address(street, zipcode, town, state, country)

println("Enter the name:")
name = readline()
println("Enter the email:")
email = readline()

customer = Customer(name, address, email)

println("Enter the manufacturer:")
manufacturer = readline()
println("Enter the product name:")
product_name = readline()
println("Enter the product id:")
product_id = readline()
println("Enter the product description:")
product_description = readline()
println("Enter the product price:")
price = parse(Float64, readline())

product = Product(manufacturer, product_name, product_id, product_description, price)

println("Enter the quantity:")
quantity = parse(Int, readline())

order = Order(product, quantity, customer, now())

print_order(order)
#end user defined inputs.


