/* Entry 0x08910A9C | file offset 0x0010DA74 | FUN_08910a9c | bytes 184 */

void FUN_08910a9c(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auStack_120 [256];
  
  uVar1 = FUN_0885c6cc(*(undefined4 *)(param_1 + 8),0x100000,0x40,0,1,1);
  uVar2 = FUN_0889381c(DAT_089d6ac8);
  FUN_0893476c(auStack_120,"map/maparc_%s_1.mpk",uVar2);
  uVar2 = FUN_08862854(auStack_120,uVar1,0x100000,1);
  FUN_08910b54(param_1,uVar1,0x100000,uVar2);
  FUN_0885c538(*(undefined4 *)(param_1 + 8),uVar1,0x40);
  return;
}

