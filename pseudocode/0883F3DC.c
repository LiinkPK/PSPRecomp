/* Entry 0x0883F3DC | file offset 0x0003C3B4 | FUN_0883f3dc | bytes 208 */

void FUN_0883f3dc(int param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 local_20;
  short local_1e;
  
  iVar1 = FUN_088bfeec(param_2);
  if (iVar1 != 0) {
    if (param_3 == '\x01') {
      local_1e = *(short *)(iVar1 + 4);
    }
    else {
      local_1e = *(short *)(iVar1 + 6);
    }
    if ((local_1e != -1) && (*(int *)(param_1 + 0x630) < 0x10)) {
      local_20 = (undefined2)param_2;
      puVar2 = (undefined2 *)
               FUN_0883f4ac(param_1 + 0x5f0,param_1 + *(int *)(param_1 + 0x630) * 4 + 0x5f0,
                            &local_20);
      iVar1 = param_1 + *(int *)(param_1 + 0x630) * 4;
      puVar3 = (undefined2 *)(iVar1 + 0x5f0);
      if (puVar2 == puVar3) {
        *puVar3 = local_20;
        *(short *)(iVar1 + 0x5f2) = local_1e;
        *(int *)(param_1 + 0x630) = *(int *)(param_1 + 0x630) + 1;
      }
    }
  }
  return;
}

