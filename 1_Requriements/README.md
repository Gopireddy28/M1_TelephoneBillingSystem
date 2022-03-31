# TELEPHONE BILLING
# DESCRIPTION

Telephone Billing System is capable of performing and managing billing activities in the same way that telephonic firms do. We can add records with names, phone numbers, and payment amounts here. Existing records can be added to, searched for, and deleted. We can also use this to make a payment by supplying your phone number rather than your name. This project will teach you how to use file handling to add, search, and delete records.

# FEATURES
- This project's architecture is straightforward, and the code is simple to comprehend.
- Add new records: update the file with new information such as the customer's name, phone number, and payment amount.
- View payment: displays the amount that needs to be paid.
- Records can be found by searching for them by name and phone number.
- Delete the data that has been stored by deleting records.

# SWOT ANALYSIS

![swot](https://user-images.githubusercontent.com/101035658/160980348-7b79ad67-2da5-4ac7-9040-e44eb7843350.png)

# 5W's & 1H

![5h](https://user-images.githubusercontent.com/101035658/160983114-191faa3f-9848-4709-aa08-0f2a85d58dda.png)

# REQURIEMENTS
## HIGH LEVEL REQURIEMENTS

<html>
<body>
<!--StartFragment-->

HLR(ID) | Description
-- | --
HLR01 | Adding new records (A)
HLR02 | Payment(P)
HLR03 | For searching records(S)
HLR04 | Deleting records(D)
HLR05 | Exit(E)

<!--EndFragment-->
</body>
</html>

## LOW LEVEL REQURIEMENTS

<html>
<body>
<!--StartFragment-->

LLR(ID) | Description
-- | --
LLR01_HLR01 | Adding Name
LLR02_HLR01 | Adding Phone number
LLR03_HLR01 | Adding Amount
LLR04_HLR02 | Phone number
LLR05_HLR02 | Amount
LLR06_HLR03 | Search Phone number
LLR07_HLR04 | Delete Phone number

<!--EndFragment-->
</body>
</html>