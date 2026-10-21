Chained Inheritance Demo (Restaurant Order System)

This program demonstrates **Chained (Multilevel) Inheritance** in C++ using a 3-tier restaurant menu item structure.

Hierarchy Structure
1. MenuItem (Base Class): Houses the general `itemName` and `basePrice` properties.
2. FoodItem (Intermediate Class): Inherits from `MenuItem` and adds kitchen `prepTimeMinutes`.
3. Pizza (Derived Class): Inherits from both upper tiers, adding `pizzaSize` and `toppingCount` properties.

Technical Highlights
   Constructor Chaining: Parameters are forwarded cleanly up the inheritance pipeline during initialization.
   Access Control: Demonstrates data reuse across multiple generations of code classes.


