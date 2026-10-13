/* Entry 0x088480D0 | file offset 0x000450A8 | FUN_088480d0 | bytes 64 */

int FUN_088480d0(int *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 < *(int *)(*param_1 + 4)) {
    iVar1 = *param_1 + param_2 * 0x74 + 8;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}

