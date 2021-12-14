# Evie Programming Language
![Pink Blue and Black Gradient Twitch Banner](https://user-images.githubusercontent.com/91504165/146093689-11703912-c566-4404-975a-72e24b47708e.png)
> DSN2098 Submission
1. The project is an attempt to to develop a fundamental understanding of the programming languages and in particular it’s computing stack, in-memory data structures,and libraries
2. Design and implementation of a programming language requires being familiar with both the mathematical and mechanical underpinnings of how languages work . 
3. It lies in the intersection of category theory and type systems, algebra, graph theory, complexity analysis, and more. 
4. The project  puts us in the shoes of programmers and language designers, and helps us develop an appreciation for the whole process of programming.
5. During programming ,the tools are often taken for granted, and we can write application software without necessarily worrying about the languages and primitive tools we’re using under the hood. 
6. The project aims to uncover the ingenuity that goes into designing the computational structure of a programming language.
## Build Process
![Element as BG](https://user-images.githubusercontent.com/91504165/146094391-f1d7625c-7ae0-4e9d-bbda-3b57d193429a.png)
### About
The project uses make utility to build the compiler from source.

### The makefile is as follows 
```
src = $(wildcard src/*.c)
obj = $(src:.c=.o)

LDFLAGS = -ledit -lm![146097926-76f2af17-37b2-42cf-995a-3d42a4caf74a](https://user-images.githubusercontent.com/91504165/146097956-891d0c13-f53b-4f8c-a78c-452051bae281.png)


evie: $(obj)
	$(CC) -o $@ $^ $(LDFLAGS)

.PHONY: clean
clean:
	rm -f $(obj) evie

```

### To Build Execute the following

```make```
## Highlights
![Element as BG (3)](https://user-images.githubusercontent.com/91504165/146094408-60d8879e-2947-472f-af05-fc0ab0624894.png)

1. The programming language field has grown and deepened steadily and constantly for a long time in both academia and industry. 
2. There’s a lot of research, prior art, and practical advice about a million different concepts that can be combined into a new language, and a million different variations on how to implement them.
3. For the current project it was a fruitful approach to pick one or two interesting ideas from the archaeology of computing, and build a programming language that examines and expands on those ideas deeply, rather than try to build the One True Language that’s best at everything and combines the best features of all the languages. 
4. Not to mention it would be impossible to make such a language considering the given time constraint
5. Our current language Evie , borrows it’s design principles the LISP language - which is a family of programming languages with a distinctive, fully parenthesized prefix notation . 
6. Due to its simpler syntax, it’s easy to parse compared to a language with a static type system.

## Standard Library Overview
![Element as BG (2)](https://user-images.githubusercontent.com/91504165/146094420-883a2a8d-5f55-4fb2-827b-82efc9ec8cf5.png)

>Important Subclasses
1. List Processing
2. Functional Functions
3. Logical Functions
4. Numeric Functions
5. Conditional Functions
6. Misc Functions

>Detailed Overview

| S/N |Implementation|Description|
|--|--|--|
| 1 | ![List123](https://user-images.githubusercontent.com/91504165/146090873-c6885622-1951-4d25-be8a-41af82aee51e.png)| Extracting First, Second, or Third Item in List |
| 2 | ![ListLength](https://user-images.githubusercontent.com/91504165/146090928-5dca693d-ab2a-4623-a4f0-1bdac427293b.png) | List Length |
| 3 |![NthItems](https://user-images.githubusercontent.com/91504165/146090942-d3498519-1030-4156-85b6-4446647ae474.png)  | Nth item in List |
| 4 | ![LastItems](https://user-images.githubusercontent.com/91504165/146090967-9dbb8860-144e-42c3-9506-ee68c81af6bd.png) | Last item in List |
| 5 | ![image](https://user-images.githubusercontent.com/91504165/146092226-c8f46c0d-819b-4805-a4fc-397e1a51f345.png)| Apply Mapping Function to List |
| 6 | ![image](https://user-images.githubusercontent.com/91504165/146092248-e3c6359e-3e7a-421c-9678-85cd8c715fa4.png) | Apply Filter to List |
| 7 | ![ReverseList](https://user-images.githubusercontent.com/91504165/146091629-b8b1df71-392d-4018-877a-98f96d8ee843.png) | Reverse List |
| 8 | ![FoldLeft](https://user-images.githubusercontent.com/91504165/146091069-015c1900-5c9c-4f49-ac4d-e8087d23d778.png) | Fold Left |
| 9 | ![FoldRight](https://user-images.githubusercontent.com/91504165/146091082-5d65cc00-5139-458e-adcc-be08bd64f140.png) | Fold Right |
| 10 | ![SumProduct](https://user-images.githubusercontent.com/91504165/146091098-822f88e1-7a66-42d0-a9bc-12b01473d8b6.png) | Summation |
| 11 | ![SumProduct](https://user-images.githubusercontent.com/91504165/146091112-d9d7cf2e-48db-4a11-b8af-7a93c23202bd.png) | Product |
| 12 | ![TakeN](https://user-images.githubusercontent.com/91504165/146091119-10bdb20e-1e11-46af-859f-9e189dd6bfce.png) | Take N items |
| 13 | ![image](https://user-images.githubusercontent.com/91504165/146092399-e5bc3f2f-9b10-4c9f-917f-cc8f795d4e62.png) | Drop N items |
| 14 | ![image](https://user-images.githubusercontent.com/91504165/146092431-903ae9b3-e34e-4f32-ae67-6b6f84947812.png)  | Split at N |
| 15 |![TakeWhile](https://user-images.githubusercontent.com/91504165/146091155-ef324cfe-e6ae-404f-9e3d-62f61605ed52.png)  | Take While |
| 16 | ![DropWhile](https://user-images.githubusercontent.com/91504165/146091195-2723c89b-7c23-418c-9879-b8c47e6a7cee.png) | Drop While |
| 17 | ![ElementOfList](https://user-images.githubusercontent.com/91504165/146091209-e78d555e-9ca6-44c8-923f-8a12c026a555.png) | Element of List |
| 18 | ![FindElePairs](https://user-images.githubusercontent.com/91504165/146091501-21ef525f-857c-41a0-bf99-94c078fcb8ba.png) | Find element in list of pairs |
| 19 | ![ZipTwoList](https://user-images.githubusercontent.com/91504165/146091486-b5837d83-d3d0-46b8-9e7e-22ff601cd0e4.png) | Zip two lists together into a list of pairs |
| 20 | ![UnZipTwo](https://user-images.githubusercontent.com/91504165/146091493-112bc316-b9cc-45bd-bf32-d94a8bbee8fa.png) | Unzip a list of pairs into two lists |
| 21 | ![Fibonacci](https://user-images.githubusercontent.com/91504165/146091460-95552852-c18e-4fb2-af22-1dafb8d945ef.png) | Fibonacci |
| 22 | ![MiscellenousFunctions](https://user-images.githubusercontent.com/91504165/146091470-eab748ea-95f8-4a06-961f-58ad6f08aca3.png) | Misc Functions - Flip Ghost & Comp |
| 23 | ![ConditionalFunctions](https://user-images.githubusercontent.com/91504165/146091606-e00aabba-4b21-4999-a9a8-3b6160c3be51.png) | Conditional Functions|
| 24 | ![MaximumArguments](https://user-images.githubusercontent.com/91504165/146091602-065c0032-6323-4496-bb65-ef4c1c20b5bf.png) | Maximum of Arguments |
| 25 | ![MinimumArguments](https://user-images.githubusercontent.com/91504165/146091597-05f57140-9800-4c60-9c87-8defa4de7566.png) | Minimum of Arguments |
| 26 | ![LogicalFunctions](https://user-images.githubusercontent.com/91504165/146091591-8d4b2c50-eb3a-4e40-8a7d-1a0ff9209086.png) | Logical Functions - and or not |
| 27 | ![PerformSequentialExec](https://user-images.githubusercontent.com/91504165/146091583-746a0ece-d6d4-456a-8ef6-11fc252d80c0.png) | Perform Several things in Sequence |
| 28 | ![CurriedUncurried](https://user-images.githubusercontent.com/91504165/146091581-483c0cc7-a095-4e07-8132-ed31c0c377af.png) | Curried and Uncurried calling |
| 29 | ![UnApply](https://user-images.githubusercontent.com/91504165/146091577-18ccf05d-93f0-4e9c-afdc-bea55323dfb8.png) | Unapply List to Function |
| 30 | ![unpackList](https://user-images.githubusercontent.com/91504165/146091571-aa303aa0-6b72-403e-9b3f-69896df3f894.png) | Unpack List to Function |
| 31 | ![OpenScope](https://user-images.githubusercontent.com/91504165/146091567-184b7d15-d8fc-49ff-afd3-8c7c6d3fc8f0.png) | Open new scope |
| 32 | ![FunctionDefinations](https://user-images.githubusercontent.com/91504165/146091561-0298e9e4-baef-4a2e-9037-b71a7148c7f3.png) | Function Definitions |
| 33 | ![Atoms](https://user-images.githubusercontent.com/91504165/146091553-6a9ed667-5c1a-40d8-be4b-e4822f26d90b.png) | Atoms - nil / true / false |

## Project Snapshots
> Project Directory
> ![Screenshot from 2021-12-15 05-18-08](https://user-images.githubusercontent.com/91504165/146097654-da223d6e-acb2-4b45-8f35-418a655fe91b.png)
> REPL Snapshot
> ![image](https://user-images.githubusercontent.com/91504165/146098091-d1da6772-c9b5-4a03-a970-b142280933ab.png)
> Project Notebook
> ![Screenshot from 2021-12-15 05-16-40](https://user-images.githubusercontent.com/91504165/146097476-7d498eaf-9e45-430f-a274-b45134862b19.png)
> ![Screenshot from 2021-12-15 05-16-57](https://user-images.githubusercontent.com/91504165/146097536-6e7edd15-b2fd-4262-af5b-895b971d6b01.png)
> ![Screenshot from 2021-12-15 05-17-13](https://user-images.githubusercontent.com/91504165/146097633-00de2bae-b2d5-4d79-b18a-60438ae4f9ec.png)
