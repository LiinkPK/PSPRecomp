/* Entry 0x089173D0 | file offset 0x001143A8 | FUN_089173d0 | bytes 276 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_089173d0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_cc [5];
  undefined4 local_b8 [40];
  undefined4 local_18;
  undefined4 local_14;
  
  puVar3 = &local_f0;
  puVar5 = &local_f0;
  iVar4 = 0;
  do {
    *(undefined4 *)((int)puVar3 + 0x24) = 0;
    *(undefined4 *)((int)puVar3 + 0x38) = 0;
    iVar4 = iVar4 + 1;
    puVar3 = (undefined4 *)((int)puVar3 + 4);
  } while (iVar4 < 5);
  local_d0 = 0;
  uVar1 = FUN_0891705c(0xffffffff);
  iVar4 = 0;
  do {
    uVar2 = FUN_08912ae8(uVar1,iVar4);
    *(undefined4 *)((int)puVar5 + 0x24) = uVar2;
    *(undefined4 *)((int)puVar5 + 0x38) = 0;
    iVar4 = iVar4 + 1;
    puVar5 = (undefined4 *)((int)puVar5 + 4);
  } while (iVar4 < 5);
  local_18 = *(undefined4 *)(DAT_089d83d8 + 0x60);
  local_14 = *(undefined4 *)(DAT_089d83d8 + 100);
  func_0x08ad0a94();
  FUN_08933c00(DAT_089d85e8);
  func_0x08af2cb0(_DAT_08b01cf8);
  local_f0 = 0;
  local_ec = 0xffffffff;
  local_e8 = 0;
  local_e4 = 0;
  local_e0 = 0;
  local_dc = 0;
  local_d8 = 0;
  func_0x08af2d08(_DAT_08b01cf8,&local_d0,3,FUN_089174e4,*(undefined4 *)(DAT_089d83d8 + 0x750),1,1,1
                 );
  FUN_08865184(DAT_089d83d8 + 4);
  return;
}

