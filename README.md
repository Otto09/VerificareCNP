# VerificareCNP 
Application in which is introduced the surname, first name and ID of a person from keyboard. If ID is incorrect, it displays "ID incorrect!" and it is required to reintroduce data (surname, fist name and ID). If ID is valid, the application stops. The input parameter is a 13-character string that will contain the CNP being checked.
                                    The verification of a CNP consists in the recalculation of the last position within it, called control character. If
                                    the result of the calculation matches the value in the CNP under test, the testCNP () function will return 1 and if it differs
                                    will return 0. According to the law, the control character is obtained as follows: A new string of values is created with 12 elements, each element of the new string being the result of one
                                    multiplications. Respectively multiply each digit in the CNP by the corresponding digit, from the same position,
                                    from another string called "test key". The test key is the string: "279146358279". it
                                    processes only the first 12 digits of the CNP. The twelve products obtained are added together and a "suma" value is obtained. Then the rest is calculated
                                    dividing the whole amount "suma" by 11, obtaining a value denoted by "car_control". Obviously, "car_control" will be between 1 and
                                    10. If "car_control" is less than 10, then it will represent the check digit, so the character that
                                    must be in the last position in the CNP (character # 13). If "car_control" is 10 then the check digit will be 1. The characters in the given CNP and those
                                    of the test key must be converted to numbers (subtracted from every 48 or '0'). The amount of products must
                                    be an int variable. 
