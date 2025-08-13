import random
import json
import os

EXCUSE_HISTORY_FILE = "excuse_history.json"
EXCUSES = {
    "work": [
        "I'm down with a mild fever, won't be able to attend today.",
        "There's a family emergency I need to take care of.",
        "My internet is acting up, I’ll join as soon as it’s back."
    ],
    "school": [
        "I had to visit a relative urgently, couldn’t attend class.",
        "Medical appointment clashed with school timings.",
        "I was feeling unwell and couldn’t focus today."
    ],
    "social": [
        "I have a prior family commitment at that time.",
        "I'm not feeling mentally up for it today.",
        "Something urgent came up, can we reschedule?"
    ]
}

def load_history():
    if os.path.exists(EXCUSE_HISTORY_FILE):
        with open(EXCUSE_HISTORY_FILE, "r") as file:
            return json.load(file)
    return []

def save_history(excuse):
    history = load_history()
    history.append(excuse)
    with open(EXCUSE_HISTORY_FILE, "w") as file:
        json.dump(history, file, indent=4)

def generate_excuse(category):
    excuse = random.choice(EXCUSES[category])
    save_history(excuse)
    return excuse

def show_history():
    history = load_history()
    if not history:
        print("No excuse history yet.")
    else:
        print("Excuse History:")
        for i, excuse in enumerate(history, 1):
            print(f"{i}. {excuse}")

def simulate_emergency():
    print("\n Simulating Emergency Alert...")
    print(" Fake emergency call scheduled to your device.")
    print(" Message: 'URGENT: Please call me back immediately!'")

def main():
    while True:
        print("\nAI Excuse Generator")
        print("1. Generate Excuse")
        print("2. View Excuse History")
        print("3. Simulate Emergency Message")
        print("4. Exit")
        choice = input("Enter your choice: ")

        if choice == "1":
            print("\nChoose category:")
            print("a. Work\nb. School\nc. Social")
            cat_choice = input("Select (a/b/c): ").lower()
            category_map = {"a": "work", "b": "school", "c": "social"}
            if cat_choice in category_map:
                excuse = generate_excuse(category_map[cat_choice])
                print(f"\nGenerated Excuse: {excuse}")
            else:
                print("Invalid category.")
        elif choice == "2":
            show_history()
        elif choice == "3":
            simulate_emergency()
        elif choice == "4":
            print("Exiting... Stay Excused")
            break
        else:
            print("Invalid input. Try again.")

if __name__ == "__main__":
    main()
