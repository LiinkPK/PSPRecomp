/* Entry 0x08853E24 | file offset 0x00050DFC | FUN_08853e24 | bytes 92 */

bool FUN_08853e24(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                 undefined2 param_5,undefined1 param_6,undefined1 param_7)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)(param_3 + 0x30);
  if (iVar1 < 2) {
    puVar2 = (undefined4 *)(param_3 + iVar1 * 0x18);
    *puVar2 = param_4;
    *(undefined2 *)(puVar2 + 1) = param_5;
    *(undefined1 *)((int)puVar2 + 7) = param_6;
    puVar2[3] = 0x3f800000;
    *(undefined1 *)((int)puVar2 + 6) = param_7;
    puVar2[4] = param_1;
    puVar2[5] = param_2;
    *(int *)(param_3 + 0x30) = iVar1 + 1;
  }
  return iVar1 < 2;
}

