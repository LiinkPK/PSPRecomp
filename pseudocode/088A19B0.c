/* Entry 0x088A19B0 | file offset 0x0009E988 | FUN_088a19b0 | bytes 208 */

void FUN_088a19b0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 local_30 [4];
  
  puVar2 = local_30;
  uVar5 = *(undefined4 *)(DAT_089d69e0 + 0x18);
  FUN_08990b90();
  local_30[0] = 0xc;
  local_30[1] = 0xd;
  local_30[2] = 0xe;
  iVar4 = 0;
  iVar3 = param_1 + 0x7c;
  do {
    iVar1 = FUN_088f47e0(*puVar2);
    *(bool *)(iVar3 + 0xc) = iVar1 != 0;
    FUN_088a1b68(uVar5,iVar3);
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 0x10;
    puVar2 = puVar2 + 1;
  } while (iVar4 < 3);
  FUN_088a07e4(uVar5,param_1 + 0x14);
  FUN_088a2324();
  FUN_0889fb9c();
  FUN_088a0098();
  return;
}

