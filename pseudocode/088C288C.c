/* Entry 0x088C288C | file offset 0x000BF864 | FUN_088c288c | bytes 48 */

void FUN_088c288c(undefined1 *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  puVar1 = param_1;
  do {
    *puVar1 = 0xff;
    puVar1[1] = 0;
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 2;
  } while (iVar2 < 100);
  *(undefined4 *)(param_1 + 200) = 0;
  return;
}

