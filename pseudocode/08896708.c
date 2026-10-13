/* Entry 0x08896708 | file offset 0x000936E0 | FUN_08896708 | bytes 172 */

void FUN_08896708(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)
           FUN_088a24d4(*(int *)(param_2 + 0x18) != 2,*(undefined4 *)(param_2 + 4),1,0);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = *(undefined4 *)(param_2 + 0xc);
    uVar3 = *(undefined4 *)(param_2 + 0x10);
    *puVar1 = *(undefined4 *)(param_2 + 8);
    puVar1[0xd] = puVar1[0xd] & 0xfffffdff;
    puVar1[1] = uVar2;
    puVar1[2] = uVar3;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[0xd] = puVar1[0xd] & 0xfffffdff;
    if (*(int *)(param_2 + 0x18) == 1) {
      FUN_088a1f94(puVar1,0);
    }
  }
  return;
}

