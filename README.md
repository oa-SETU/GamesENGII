# GamesENGII — Labs & Student Submissions

This repository hosts lab notes, reference lab code, and per‑student lab submissions for **COMP H4204 — Games Engineering II**.

## Repository structure
```
GamesENGII/
├─ LabNotes/            # Instructor-provided lab handouts (one subfolder per week)
├─ LabCodes/            # Instructor reference solutions / starter code (one subfolder per week)
├─ studentLabs/         # Each student pushes only inside their own folder (e.g., SETU202212/)
│  ├─ SETU202212/       # Example student folder
│  └─ SETU320014/       # Example student folder
└─ .github/
   └─ CODEOWNERS        # Path-based ownership rules used with branch protection
```

> **Path ownership & integrity**  
> We use GitHub branch protection with **Require pull request reviews** and **Require review from Code Owners**.  
> A `CODEOWNERS` file maps each student folder to that student's GitHub username.  
> This prevents merges that modify *another* student's folder without approval from the relevant code owner (the student) or instructor.

---


## Student workflow (high level)

1. Ensure your GitHub account is on the class roster (posted on blackboard, and/or email <omer.ali@setu.ie>).  
2. Clone the repo and create a folder named exactly with your registration code under `studentLabs/` (e.g., `studentLabs/SETU202212`).  
3. Work on a feature branch (e.g., `lab01/SETU202212`) and open a Pull Request to `main`.  
4. Only changes inside **your** folder will be mergeable without instructor override.  
5. Push updates for each lab via new commits/PRs.

See the **Detailed Instructions** in the course LMS and the repository wiki for screenshots and FAQs.
