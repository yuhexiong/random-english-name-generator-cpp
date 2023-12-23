#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>

namespace MyNamespace {
    std::vector<std::string> firstName = {"James", "Mary", "John", "Patricia", "Robert", "Jennifer", "Michael", "Linda", "William", "Elizabeth", "David", "Barbara", "Richard", "Susan", "Joseph", "Jessica", "Thomas", "Sarah", "Charles", "Karen", "Christopher", "Nancy", "Daniel", "Lisa", "Matthew", "Betty", "Anthony", "Dorothy", "Donald", "Sandra", "Mark", "Ashley", "Paul", "Kimberly", "Steven", "Donna", "George", "Emily", "Kenneth", "Michelle", "Andrew", "Carol", "Edward", "Amanda", "Brian", "Melissa", "Joshua", "Deborah", "Kevin", "Stephanie", "Ronald", "Rebecca", "Gary", "Laura", "Timothy", "Christine", "Joe", "Rachel", "Larry", "Debra", "Frank", "Angela", "Henry", "Melanie", "Peter", "Janet", "Walter", "Sharon", "Harold", "Cynthia", "Roger", "Katherine"};
    std::vector<std::string> middleName = {"Lee", "Anne", "Joseph", "Marie", "Michael", "Nicole", "Allen", "Grace", "Edward", "Jane", "Frank", "Rose", "Charles", "Ann", "Thomas", "May", "Edward", "Louise", "Raymond", "Marilyn", "Eugene", "Theresa", "Peter", "Gloria", "Eric", "Julia", "Norman", "Ruth", "Bryan", "Anna", "Jerry", "Beverly", "Philip", "Judith", "Todd", "Catherine", "Craig", "Helen", "Alan", "Laura", "Roger", "Teresa", "Ralph", "Cheryl", "Billy", "Evelyn", "Bruce", "Jacqueline", "Howard", "Christine", "Carl", "Kathleen", "Martin", "Denise", "Clarence", "Geraldine", "Gordon", "Annette", "Albert", "Suzanne", "Frederick", "Pamela", "Lawrence", "Gwendolyn", "Ronnie", "Thelma", "Curtis", "Charlene", "Stanley", "Margaret"};
    std::vector<std::string> lastName = {"Smith", "Johnson", "Williams", "Brown", "Jones", "Garcia", "Miller", "Davis", "Rodriguez", "Martinez", "Hernandez", "Lopez", "Gonzalez", "Wilson", "Anderson", "Thomas", "Taylor", "Moore", "Jackson", "Martin", "Lee", "Perez", "Thompson", "White", "Harris", "Sanchez", "Clark", "Ramirez", "Lewis", "Robinson", "Walker", "Young", "Allen", "King", "Wright", "Scott", "Torres", "Nguyen", "Hill", "Flores", "Green", "Adams", "Nelson", "Baker", "Hall", "Rivera", "Campbell", "Mitchell", "Carter", "Roberts", "Gomez", "Evans", "Turner", "Parker", "Collins", "Edwards", "Stewart", "Morris", "Rogers", "Reed", "Cook", "Morgan", "Bell", "Murphy", "Bailey", "Cooper", "Cox", "Richardson", "Howard"};
}


std::string generateRandomName() {
    srand(time(0));

    std::string name = MyNamespace::firstName[rand() % MyNamespace::firstName.size()];
    name += " ";
    name += MyNamespace::middleName[rand() % MyNamespace::middleName.size()];
    name += " ";
    name += MyNamespace::lastName[rand() % MyNamespace::lastName.size()];

    return name;
}

int main() {
    std::cout << generateRandomName() << std::endl;
    return 0;
}