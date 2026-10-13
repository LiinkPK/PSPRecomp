/* Entry 0x0884BDD4 | file offset 0x00048DAC | FUN_0884bdd4 | bytes 60 */

void FUN_0884bdd4(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x2588) = 0;
  *(undefined4 *)(param_1 + 0x2584) = 0;
  *(undefined4 *)(param_1 + 0x2580) = 0;
  iVar2 = 1;
  puVar1 = (undefined1 *)(param_1 + 0x25a0);
  do {
    *(undefined4 *)(puVar1 + 0x10) = 0;
    *(undefined4 *)(puVar1 + 0xc) = 0;
    *puVar1 = (char)iVar2;
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 0x14;
  } while (iVar2 < 0x20);
  return;
}

