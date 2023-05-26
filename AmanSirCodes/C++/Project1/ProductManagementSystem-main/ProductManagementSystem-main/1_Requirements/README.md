# REQUIREMENTS

## Introduction

Cosmetic Product Management System is a simple application system designed to maintain details of all cosmetic products. Cosmetics are used on day to day basis. The project focuses on adding new cosmetics, viewing cosmetics, deleting and editing the list.

## Research

Cosmetics are constituted mixtures of chemical compounds derived from either natural sources, or synthetically created ones. Cosmetics have various purposes. Those designed for personal care and skin care can be used to cleanse or protect the body or skin. Cosmetics designed to enhance one's appearance (makeup) can be used to conceal blemishes, enhance one's natural features (such as the eyebrows and eyelashes), add color to a person's face and,can be used to change the appearance of the face entirely to resemble a different person, creature or object. Cosmetics can also be designed to add fragrance to the body.

## Features with Timeline

* Major activities of the manual system is automated, which increases its throughput
* The system is fast, user friendly and interactive
* The information entered is more accurate and clear
* Better data management facility in terms of maintaining files which are entered in registers manually and stored.


## Defining our system

* Add Cosmetics
* Delete Cosmetics
* Edit Cosmetics
* View Cosmetics

![DFD0](https://user-images.githubusercontent.com/89658708/132548517-314092cb-8abd-4c12-b2fc-4fc87c9ca735.png)


## SWOT Analysis

![SWOT](https://user-images.githubusercontent.com/89658708/132307369-b8a0c100-6c96-4418-b1c6-181cabbb576b.png)


## 4W's and 1H

### WHO

Any one who wants to view cosmetic products can view this application.

### WHAT

This application manages cosmetic products data.

### WHY

The increase of self care among everyone. Cosmetics are mainly used by women.

### HOW

Implemented using structures, files, pointers and other functionalities of C.

# Detail requirements
## High Level Requirements:

| ID | Description | Category | Status
| --- | --- | --- | --- |
| HR01 | User shall be able to add new cosmetic products | Technical | Implemented
| HR02 | User shall be able to view cosmetic products | Technical | Implemented
| HR03 | User shall be able to edit cosmetic products | Technical | Implemented
| HR04 | User shall be able to read cosmetic products | Technical | Implemented

## Low Level Requirements:

| ID | Description | HLR_ID | Status
| --- | --- | --- | --- |
| LR01 | New product shall be added when prompted by the UI | HR01 | Implemented
| HR02 | Product Code should be unique | HR01 | Implemented
| HR03 | Product Name and company can't have invalid characters | HR01,HR03 | Implemented
| HR04 | Reading cosmetic product data should be allowed. | HR04 | Implemented
