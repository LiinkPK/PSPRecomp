/* Entry 0x0890AAE4 | file offset 0x00107ABC | FUN_0890aae4 | bytes 104 */

bool FUN_0890aae4(int param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = *(int *)(param_1 + 0x1bc) != 0;
  if (bVar1) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x1bc) + 4);
    (**(code **)(iVar2 + 0x24))
              (*(int *)(param_1 + 0x1bc) + (int)*(short *)(iVar2 + 0x20),param_1 + 4,param_2,param_3
              );
    *(undefined4 *)(param_1 + 400) = 6;
  }
  return bVar1;
}

