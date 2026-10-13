/* Entry 0x089838F8 | file offset 0x001808D0 | FUN_089838f8 | bytes 164 */

void FUN_089838f8(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 auStack_50 [64];
  
  uVar1 = DAT_089da278;
  iVar3 = *(int *)(param_2 + 0x8c);
  puVar2 = *(undefined1 **)
            (*(int *)(iVar3 + 0x48) +
            (uint)*(ushort *)(*(int *)(*(int *)(param_2 + 0x90) + 8) + 8) * 4);
  FUN_08946ac4(0x3f800000,param_2,iVar3,*(undefined4 *)(iVar3 + 0x50),*puVar2,puVar2[1],puVar2[2],
               auStack_50);
  FUN_0896fb5c(auStack_50);
  FUN_0898a2c8(*param_4,param_3,uVar1);
  return;
}

