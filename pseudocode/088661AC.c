/* Entry 0x088661AC | file offset 0x00063184 | FUN_088661ac | bytes 104 */

int FUN_088661ac(int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x8c0);
  if (param_2 == '\x01') {
    iVar2 = 1 - iVar2;
  }
  iVar3 = 0x44000;
  if (*(char *)(param_1 + 0x2ccf) == '\x01') {
    iVar3 = 0x88000;
  }
  iVar1 = sceGeEdramGetAddr();
  return iVar1 + iVar2 * iVar3;
}

