/* Entry 0x08891284 | file offset 0x0008E25C | FUN_08891284 | bytes 76 */

bool FUN_08891284(char *param_1)

{
  bool bVar1;
  int iVar2;
  int local_60 [22];
  
  if (*param_1 == '\0') {
    bVar1 = false;
  }
  else {
    iVar2 = FUN_088916a4(param_1,local_60);
    if (iVar2 == 0) {
      bVar1 = local_60[0] == 0x33;
    }
    else {
      bVar1 = false;
    }
  }
  return bVar1;
}

