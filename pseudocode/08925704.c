/* Entry 0x08925704 | file offset 0x001226DC | FUN_08925704 | bytes 116 */

void FUN_08925704(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_08899300();
  uVar1 = FUN_088985f0(uVar1,(int)*(char *)(*(int *)(param_1 + 4) + 0xc));
  uVar2 = FUN_08893a18(DAT_089d6ac8);
  uVar2 = FUN_089257bc(param_1,uVar2,100);
  FUN_088939ac(DAT_089d6ac8,uVar1,uVar2);
  return;
}

