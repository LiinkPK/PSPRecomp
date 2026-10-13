/* Entry 0x08986D38 | file offset 0x00183D10 | FUN_08986d38 | bytes 276 */

void FUN_08986d38(int param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_b0 [64];
  undefined1 auStack_70 [64];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  local_30 = *(undefined4 *)(param_1 + 0xac);
  iVar2 = *(int *)(param_2 + 0x8c);
  puVar1 = *(undefined1 **)
            (*(int *)(iVar2 + 0x48) +
            (uint)*(ushort *)(*(int *)(*(int *)(param_2 + 0x90) + 8) + *(int *)(param_1 + 0xb8) * 2)
            * 4);
  local_2c = local_30;
  local_28 = local_30;
  local_24 = local_30;
  FUN_08946ac4(0x3f800000,param_2,iVar2,*(undefined4 *)(iVar2 + 0x50),*puVar1,puVar1[1],puVar1[2],
               auStack_70);
  iVar2 = *(int *)(param_2 + 0x8c);
  FUN_08947b88(0x3f800000,param_2,iVar2,*(undefined4 *)(iVar2 + 0x50),
               *(undefined1 *)
                (*(int *)(*(int *)(iVar2 + 0x48) +
                         (uint)*(ushort *)
                                (*(int *)(*(int *)(param_2 + 0x90) + 8) +
                                *(int *)(param_1 + 0xb8) * 2) * 4) + 1),3,param_1 + 0x90,&local_30,
               auStack_b0);
  uVar3 = FUN_0896fd08(auStack_70,auStack_b0);
  FUN_0896fd88(uVar3);
  return;
}

