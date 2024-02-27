**Scenario 5:** <br>
Your task is to create a platform dedicated to connecting users with exciting BOGO (Buy One Get One)
deals offered by restaurants. This platform will make it effortless for people to discover and enjoy special
offers from various restaurants, allowing them to savor delicious meals with the added bonus of getting
another one for free.<br><br>
Restaurant Class encapsulates key details and functionalities related to each restaurant. Features include:<br>
restaurant_name, location, menu_list, price_list, valid_coupon_codes_list, and coupons_redeemed_count
(static variable),a static variable tracking the total number of coupons redeemed across all instances of the
Restaurant class.<br><br>
Restaurant class must have following member functions:<br>
● display_menu()<br>
● generate_bill()<br>
● apply_discount()<br>

BOGOCoupon Class includes features related to coupons such as:<br>
● coupon_code: Alphanumeric code representing the unique identity of each coupon.<br>
● valid_from: The start date when the coupon becomes active.<br>
● valid_until: The expiration date marking the end of the coupon's validity.<br>
● restaurant_code: The prefix indicating the associated restaurant.<br>
It must have the is_valid Method which validates whether the coupon is within its validity period. Also
checks if the coupon is associated with the selected restaurant.<br><br>
User Class must have the following attributes:<br>
name, age, mobile_number, coupons_list: A list containing the BOGO coupons accumulated by the user, and redeemed_coupons_list.<br>
<br>It must have the following member functions:<br>
● Accumulate_coupon(): Adds a new coupon to the user's list, acquired through various activities or
promotions.<br>
● Has_valid_coupon(): Checks if the user has a valid unredeemed coupon for a specific restaurant
and item.<br>
● redeem_coupon(): Validates the coupon code and ensures it hasn't been previously redeemed.<br><br>
Main Details:<br>
Two restaurants, namely Food Haven and Pixel Bites, are established with distinctive characteristics. Food
Haven, located in the City Center, offers a fusion of delightful dishes such as Sushi, Pad Thai, and Mango
Tango. On the other hand, Pixel Bites, situated in Cyber Street, entices users with its Digital Delicacies like
Binary Burger, Quantum Quinoa, and Data Donuts.<br>
Users are invited to explore the diverse menu offerings of Food Haven and Pixel Bites through the
display_menu method. BOGO coupons are introduced with restaurant-specific codes. For instance, a 
coupon with the code "FH-BOGO-12345" is associated with Food Haven, and another with "PB-BOGO-67890" is linked to Pixel Bites. When placing an order, users employ the redeem_coupon process. 
<br>The system validates the coupon code, ensuring it corresponds to the selected restaurant and has not been
previously redeemed. Successful redemption allows users to enjoy a delightful BOGO offer on their orders,
contributing to a rich and immersive dining experience.

**OUTPUT**
![image](https://github.com/arwa007/OOPSpring24/assets/142319755/83a6a3cc-70ef-4e30-9cd8-222cc583d2ca)
