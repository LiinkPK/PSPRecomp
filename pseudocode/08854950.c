/* Entry 0x08854950 | file offset 0x00051928 | FUN_08854950 | bytes 124 */

void FUN_08854950(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (*param_1 != 0) {
    param_1[5] = param_2;
    iVar1 = FUN_0885c6cc(param_2,0xf00,0,0,1,0);
    iVar2 = 0;
    param_1[2] = iVar1;
    iVar1 = 0;
    do {
      iVar2 = iVar2 + 1;
      *(undefined4 *)(param_1[2] + iVar1 + 0x44) = 0;
      iVar1 = iVar1 + 0x60;
    } while (iVar2 < 0x28);
  }
  param_1[4] = 0;
  param_1[3] = 0;
  return;
}

