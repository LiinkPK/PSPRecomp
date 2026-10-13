/* Entry 0x08928E70 | file offset 0x00125E48 | FUN_08928e70 | bytes 204 */

void FUN_08928e70(undefined4 *param_1,byte *param_2)

{
  bool bVar1;
  int iVar2;
  
  if (*param_2 == 0) {
    bVar1 = false;
    if (((param_2[1] == 0) && (bVar1 = false, param_2[2] == 0)) && (bVar1 = false, param_2[3] == 0))
    {
      bVar1 = true;
    }
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    *param_1 = 0xffffffff;
    param_1[1] = 0xffffffff;
  }
  else if (((*param_2 == 0) || (0x22 < *param_2)) || (iVar2 = FUN_0892905c(), iVar2 == 0)) {
    *param_1 = 0xffffffff;
    param_1[1] = 0xffffffff;
  }
  else {
    *param_1 = 0x8e;
    param_1[1] = 0xffffffff;
  }
  return;
}

