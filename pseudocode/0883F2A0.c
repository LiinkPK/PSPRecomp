/* Entry 0x0883F2A0 | file offset 0x0003C278 | FUN_0883f2a0 | bytes 280 */

void FUN_0883f2a0(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  FUN_0883f3dc(param_1,param_2,1);
  iVar1 = FUN_088bf4cc(param_1,5);
  if (iVar1 == 0) {
    puVar3 = (undefined4 *)(param_1 + 0x32c);
    uVar2 = 0;
    do {
      uVar4 = 1 << (uVar2 & 0x1f);
      if (((((*(uint *)(param_1 + 0x5ec) & uVar4) == 0) &&
           ((puVar3[(param_2 >> 5) + 3] & 1 << (param_2 & 0x1f)) != 0)) &&
          (iVar1 = FUN_088b29d8(*puVar3), iVar1 != 0)) && (*(char *)(iVar1 + 0x16) < '\0')) {
        *(uint *)(param_1 + 0x5ec) = *(uint *)(param_1 + 0x5ec) | uVar4;
        return;
      }
      uVar2 = uVar2 + 1;
      puVar3 = puVar3 + 0x11;
    } while ((int)uVar2 < 10);
  }
  return;
}

