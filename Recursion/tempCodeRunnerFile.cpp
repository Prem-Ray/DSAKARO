
    }

    s[l]=tolower(s[l]) ;
    s[r]=tolower(s[r]) ;

    if(s[l] != s[r]) {
        return false ;
    }

    return isPalindrome(s,l+1,r-1) ;