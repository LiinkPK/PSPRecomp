/* Entry 0x08836D38 | file offset 0x00033D10 | FUN_08836d38 | bytes 84 */

void FUN_08836d38(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 undefined1 param_6)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(int *)(param_1 + 0x4ac) + param_2 * 0x14);
  if (*(char *)(puVar1 + 4) == '\0') {
    *puVar1 = param_3;
    puVar1[1] = param_4;
    puVar1[3] = 0;
    *(undefined1 *)(puVar1 + 4) = 1;
    puVar1[2] = (float)param_5;
    *(undefined1 *)((int)puVar1 + 0x11) = param_6;
  }
  return;
}

