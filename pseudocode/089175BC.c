/* Entry 0x089175BC | file offset 0x00114594 | FUN_089175bc | bytes 244 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_089175bc(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_d0;
  undefined4 local_cc [5];
  undefined4 local_b8 [40];
  undefined4 local_18;
  undefined4 local_14;
  
  puVar3 = &local_d0;
  puVar5 = &local_d0;
  iVar4 = 0;
  do {
    *(undefined4 *)((int)puVar3 + 4) = 0;
    *(undefined4 *)((int)puVar3 + 0x18) = 0;
    iVar4 = iVar4 + 1;
    puVar3 = (undefined4 *)((int)puVar3 + 4);
  } while (iVar4 < 5);
  local_d0 = 0;
  uVar1 = FUN_0891705c(0xffffffff);
  iVar4 = 0;
  do {
    uVar2 = FUN_08912ae8(uVar1,iVar4);
    *(undefined4 *)((int)puVar5 + 4) = uVar2;
    *(undefined4 *)((int)puVar5 + 0x18) = 0;
    iVar4 = iVar4 + 1;
    puVar5 = (undefined4 *)((int)puVar5 + 4);
  } while (iVar4 < 5);
  local_18 = *(undefined4 *)(DAT_089d83d8 + 0x60);
  local_14 = *(undefined4 *)(DAT_089d83d8 + 100);
  func_0x08ad0a94();
  FUN_08933c00(DAT_089d85e8);
  func_0x08af2f14(_DAT_08b01cf8);
  func_0x08af2f1c(_DAT_08b01cf8,*(undefined4 *)(DAT_089d83d8 + 0x7cc),&local_d0,3,FUN_089176b0,
                  *(undefined4 *)(DAT_089d83d8 + 0x750),1,1);
  FUN_08865184(DAT_089d83d8 + 4);
  return;
}

