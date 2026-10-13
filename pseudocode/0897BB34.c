/* Entry 0x0897BB34 | file offset 0x00178B0C | FUN_0897bb34 | bytes 404 */

void FUN_0897bb34(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined1 auStack_30 [16];
  
  FUN_089a3a44(0x3c000000,auStack_30,
               *(int *)(param_4 + 0x8c) +
               (uint)*(ushort *)
                      (*(int *)(*(int *)(param_4 + 0x90) + 8) +
                      *(int *)(*(int *)(param_4 + 0x90) + 4) * 2) + 0x60);
  iVar1 = *(int *)(param_4 + 0x8c) +
          (uint)*(ushort *)
                 (*(int *)(*(int *)(param_4 + 0x90) + 8) +
                 (*(int *)(*(int *)(param_4 + 0x90) + 4) + 2) * 2) + 0x60;
  FUN_089a3918(param_1,param_3,iVar1);
  FUN_089a3918(param_1,param_1,auStack_30);
  FUN_089a4aac(0,0x437f0000,param_1,param_1);
  param_1 = param_1 + 0x10;
  FUN_089a3918(param_1,param_3 + 0x20,iVar1);
  FUN_089a3918(param_1,param_1,auStack_30);
  FUN_089a4aac(0,0x437f0000,param_1,param_1);
  FUN_089a3918(param_2,param_3 + 0x10,iVar1);
  FUN_089a3918(param_2,param_2,auStack_30);
  FUN_089a4aac(0,0x437f0000,param_2,param_2);
  param_2 = param_2 + 0x10;
  FUN_089a3918(param_2,param_3 + 0x30,iVar1);
  FUN_089a3918(param_2,param_2,auStack_30);
  FUN_089a4aac(0,0x437f0000,param_2,param_2);
  return;
}

