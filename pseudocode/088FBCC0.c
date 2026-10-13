/* Entry 0x088FBCC0 | file offset 0x000F8C98 | FUN_088fbcc0 | bytes 120 */

void FUN_088fbcc0(int param_1)

{
  int iVar1;
  undefined1 auStack_50 [48];
  float local_20;
  float local_1c;
  undefined1 auStack_10 [4];
  
  iVar1 = *(int *)(param_1 + 0x30);
  FUN_088da0a8(*(undefined4 *)(iVar1 + 0xa68),
               *(undefined2 *)
                (&DAT_089d7f58 + (*(int *)(iVar1 + 0x10a4) - *(int *)(iVar1 + 0x10b0)) * 2),
               auStack_50,auStack_10);
  FUN_088d9c60(*(undefined4 *)(*(int *)(param_1 + 0x30) + 0xa6c),(int)local_20,(int)local_1c);
  return;
}

