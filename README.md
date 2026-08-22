# Project 2 · Data lab

**Week 09 · Project**  
**Theme:** One record, then the sweep

This README is the full prompt.


## Demo video (required)

Paste a link to a short video of you running this assignment (tool + code + run).
Work without a working video link is incomplete.

**Your demo:** _add your link here_


## What to ship
Ten or more numbers that mean something. One walk. A report: n, avg, hi, lo, and a filtered count.

## Tracks (pick 1)
| Track | Data | Filter example |
|-------|------|----------------|
| **A · Gradebook** | 10–20 scores | pass ≥ 70 |
| **B · Weather** | temps or rain | hot ≥ 80 |
| **C · Inventory** | quantities | low stock < 5 |

## Requirements
- ≥10 values in array(s)
- sum / avg / min / max in one sweep
- A named filter count
- Seed min/max from `a[0]`
- README lists the data and pastes the report

## Sample report
```
n=10  avg=78.1  hi=95  lo=60  pass=8
```

Hand-check `a[0]` first. If the loop disagrees, trust the hand check.

## Starter
Start from `main.cpp`. Literal arrays are enough — no file I/O.

## Deliverables
1. Course-visible GitHub repo
2. README — data + sample report
3. Short demo video (tool + code + run)
4. Canvas links

## Scope fence
Arrays + loops + conditionals. No pointers or files required.

## Integrity
- AI = tutor, not ghostwriter
- Fake ownership → zero
- Due: Monday night (not Sunday)
- Discussions (every week): first post Friday, replies Sunday
- Late: course policy (−10%/day unless stated otherwise)

## Rubric
Graded on: it runs, it meets the prompt, output is labeled, and the GitHub repo plus demo video are there.

## Getting started

1. Fork this repo on GitHub.
2. Clone your fork.
3. Compile and run:

```bash
g++ -std=c++17 -o program main.cpp && ./program
```

On Windows (Visual Studio), open `main.cpp` and use **Local Windows Debugger**.
4. Record a short demo that shows your tool, your code, and a real run.
5. Paste the video link in the **Demo video** section above.
6. Submit your fork URL on Canvas.
