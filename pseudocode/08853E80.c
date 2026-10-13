/* Entry 0x08853E80 | file offset 0x00050E58 | FUN_08853e80 | bytes 88 */

bool FUN_08853e80(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 param_5,undefined2 param_6,undefined1 param_7,undefined1 param_8)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)(param_4 + 0x30);
  if (iVar1 < 2) {
    puVar2 = (undefined4 *)(param_4 + iVar1 * 0x18);
    *puVar2 = param_5;
    *(undefined2 *)(puVar2 + 1) = param_6;
    puVar2[3] = param_1;
    *(undefined1 *)((int)puVar2 + 7) = param_7;
    *(undefined1 *)((int)puVar2 + 6) = 0;
    puVar2[4] = param_2;
    puVar2[5] = param_3;
    *(undefined1 *)(puVar2 + 2) = param_8;
    *(int *)(param_4 + 0x30) = iVar1 + 1;
  }
  return iVar1 < 2;
}

