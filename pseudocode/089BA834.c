/* Entry 0x089BA834 | file offset 0x001B780C | FUN_089ba834 | bytes 196 */

int FUN_089ba834(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 != 0) {
    iVar2 = 0;
    do {
      iVar1 = FUN_089ba784(param_1,param_2);
      iVar2 = iVar2 + 1;
      if (iVar1 != 0) {
        FUN_089ba814();
        return param_2;
      }
      param_1 = (param_1 + 1) % 3;
    } while (iVar2 != 3);
  }
  return param_2;
}

