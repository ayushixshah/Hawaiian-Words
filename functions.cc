#include "functions.hpp"
using namespace std;
std::string renewing;
std::string avocado;
int i;
bool check;

std::string ToHawaii(std::string word) {
  int length = (int)word.length();
  for (int i = 0; i < length; i++) {
    char c = word[i];
    c = (char)tolower(c);
    renewing += c;
  }
  for (i = 0; i < (int)renewing.length(); i++) {
    switch (renewing[i]) {
    case 'a':
      A(renewing);
      Checker();
      break;
    case 'e':
      E(renewing);
      Checker();
      break;
    case 'u':
      VowelU(renewing);
      Checker();
      break;
    case 'o':
      O(renewing);
      Checker();
      break;
    case 'i':
      I(renewing);
      Checker();
      break;
    case 'w':
      W(renewing);
      break;
    default:
      Valid(renewing, word);
      if (renewing[i] == ' ' || renewing[i] == '\'') {
        avocado.erase((int)avocado.length() - 2, 1);
      }
    }
  }
  return avocado;
}
void Valid(std::string renewing, std::string word) {
  if (renewing[i] == 'p' || renewing[i] == 'k' || renewing[i] == 'h' ||
      renewing[i] == 'l' || renewing[i] == 'm' || renewing[i] == 'n' ||
      renewing[i] == ' ' || renewing[i] == '\'') {
    avocado += renewing[i];
  } else {
    avocado =
        word + " contains a character not a part of the Hawaiian language.";
  }
}
void Checker() {
  if (check) {
    i++;
    check = false;
  }
}
void A(std::string renewing) {
  // int length = (int)renewing.length();
  if (renewing[i] == 'a') {
    if (renewing[i + 1] == 'i' || renewing[i + 1] == 'e') {
      avocado += "eye-";
      check = true;
    } else if (renewing[i + 1] == 'o' || renewing[i + 1] == 'u') {
      avocado += "ow-";
      check = true;
    } else {
      avocado += "ah-";
    }
  }
}
//   switch (renewing[i + 1]) {
//   case 'i':
//   case 'e':
//     Empty += "eye-";
//     check = true;
//     break;
//   case 'o':
//   case 'u':
//     Empty += "ow-";
//     check = true;
//     break;
//   default:
//     Empty += "ah-";
//     break;
//   }
//   break;
// }
// }
// }
// }
// return false;
void E(std::string renewing) {
  // int length = (int)renewing.length();
  if (renewing[i] == 'e') {
    if (renewing[i + 1] == 'i') {
      avocado += "ay-";
      check = true;
    } else if (renewing[i + 1] == 'u') {
      avocado += "eh-oo-";
      check = true;
    } else {
      avocado += "eh-";
    }

    // switch (renewing[i]) {
    // case 'e':
    //   switch (renewing[i + 1]) {
    //   case 'i':
    //     Empty += "ay-";
    //     check = true;
    //     // i++;
    //     // return true;
    //   case 'u':
    //     Empty += "eh-oo-";
    //     check = true;
    //     // i++;
    //     // return true;
    //   default:
    //     Empty += "eh-";
    //     // return false;
    //   }
    //   //  }
    // }
    // // return false;
  }
}
void I(std::string renewing) {
  // int length = (int)renewing.length();
  if (renewing[i] == 'i') {
    if (renewing[i + 1] == 'u') {
      avocado += "ew-";
      check = true;
    } else {
      avocado += "ee-";
    }
  }
}
// switch (renewing[i]) {
// case 'i':
//   switch (renewing[i + 1]) {
//   case 'u':
//     Empty += "ew-";
//     check = true;
//     // i++;
//     // return true;
//   default:
//     Empty += "ee-";
//     // return false;
//   }
//   // }
// }
// // return false;

void O(std::string renewing) {
  // int length = (int)renewing.length();
  //  for (i = 0; i < length; i++) {
  if (renewing[i] == 'o') {
    if (renewing[i + 1] == 'i') {
      avocado += "oy-";
      check = true;
    } else if (renewing[i + 1] == 'u') {
      avocado += "ow-";
      check = true;
    } else {
      avocado += "oh-";
    }
  }
  // switch (renewing[i]) {
  // case 'o':
  //   switch (renewing[i + 1]) {
  //   case 'i':
  //     Empty += "oy-";
  //     check = true;
  //     // i++;
  //     // return true;
  //   case 'u':
  //     Empty += "ow-";
  //     check = true;
  //     // i++;
  //     // return true;
  //   default:
  //     Empty += "oh-";
  //     // return false;
  //   }
  //   // }
  // }
  // return false;
}
void VowelU(std::string renewing) {
  // int length = (int)renewing.length();
  // for (i = 0; i < length; i++) {
  if (renewing[i] == 'u') {
    if (renewing[i + 1] == 'i') {
      avocado += "ooey-";
      check = true;
    } else {
      avocado += "oo-";
    }
  }
  // switch (renewing[i]) {
  // case 'u':
  //   switch (renewing[i + 1]) {
  //   case 'i':
  //     Empty += "ooey-";
  //     check = true;
  //     // i++;
  //     // return true;
  //   default:
  //     Empty += "oo-";
  //     // return false;
  //   }
  //   //  }
  // }
  // // return false;
}
void W(std::string renewing) {
  // std::string renewing;
  // int length = (int)word.length();
  // for (i = 0; i < length; i++) {
  switch (renewing[i]) {
  case 'w':
    switch (renewing[i - 1]) {
    case 'i':
    case 'e':
      avocado += 'v';
      // return true;
      break;
    default:
      avocado += 'w';
      // return false;
      break;
    }
  }
  // return false;
}