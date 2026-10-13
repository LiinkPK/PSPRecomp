/* Entry 0x0889120C | file offset 0x0008E1E4 | FUN_0889120c | bytes 120 */

bool FUN_0889120c(char *param_1)

{
  bool bVar1;
  int iVar2;
  
  if (*param_1 == '\0') {
    bVar1 = false;
  }
  else {
    iVar2 = FUN_08891284(param_1);
    if (iVar2 == 1) {
      bVar1 = true;
    }
    else {
      iVar2 = func_0x08a22c78(*(undefined4 *)(param_1 + 4));
      if (iVar2 == 0) {
        bVar1 = false;
      }
      else {
        iVar2 = func_0x08b3390c(iVar2);
        bVar1 = 0 < iVar2;
      }
    }
  }
  return bVar1;
}

