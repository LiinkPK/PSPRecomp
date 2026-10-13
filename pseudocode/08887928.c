/* Entry 0x08887928 | file offset 0x00084900 | FUN_08887928 | bytes 52 */

int FUN_08887928(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_089d7354 + *param_1 * 8;
  iVar1 = -1;
  if (iVar2 != 0) {
    iVar1 = (int)*(short *)(iVar2 + param_1[1] * 2);
  }
  return iVar1;
}

