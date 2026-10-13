/* Entry 0x089ABF70 | file offset 0x001A8F48 | thunk_FUN_089abeac | bytes 8 */

int thunk_FUN_089abeac(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 != 0) {
    iVar2 = 0;
    do {
      iVar1 = FUN_089ab62c(param_1,param_2);
      iVar2 = iVar2 + 1;
      if (iVar1 != 0) {
        FUN_089abbbc();
        return param_2;
      }
      param_1 = (param_1 + 1) % 3;
    } while (iVar2 != 3);
  }
  return param_2;
}

