/* Entry 0x08975FA4 | file offset 0x00172F7C | FUN_08975fa4 | bytes 152 */

void FUN_08975fa4(undefined4 param_1,int param_2,int param_3,undefined4 *param_4)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 auStack_50 [64];
  
  iVar2 = *(int *)(param_2 + 0x8c);
  puVar1 = *(undefined1 **)
            (*(int *)(iVar2 + 0x48) +
            (uint)*(ushort *)(*(int *)(*(int *)(param_2 + 0x90) + 8) + 2) * 4);
  FUN_08946ac4(0x3f800000,param_2,iVar2,*(undefined4 *)(iVar2 + 0x50),*puVar1,puVar1[1],puVar1[2],
               auStack_50);
  FUN_089c30f4(*param_4,*(undefined1 *)(param_3 + 0x3f),param_3 + 0x50,param_3 + 0x60,auStack_50,0);
  return;
}

