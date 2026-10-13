/* Entry 0x0890AA1C | file offset 0x001079F4 | FUN_0890aa1c | bytes 100 */

undefined4 FUN_0890aa1c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x1bc) == 0) {
    uVar1 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(param_1 + 0x1bc) + 4);
    uVar1 = (**(code **)(iVar2 + 0x14))
                      (*(int *)(param_1 + 0x1bc) + (int)*(short *)(iVar2 + 0x10),param_1 + 4,param_2
                       ,*(undefined4 *)(param_1 + 0x198),*(undefined4 *)(param_1 + 0x19c));
  }
  return uVar1;
}

