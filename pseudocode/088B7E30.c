/* Entry 0x088B7E30 | file offset 0x000B4E08 | FUN_088b7e30 | bytes 164 */

void FUN_088b7e30(int param_1)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = param_1;
  do {
    FUN_088b73fc(iVar2);
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 0xc6;
  } while (iVar3 < 5);
  iVar2 = 0;
  puVar1 = (undefined2 *)(param_1 + 0x3de);
  do {
    puVar1[2] = 0;
    *puVar1 = 0xffff;
    puVar1[1] = 0;
    puVar1[2] = puVar1[2] | 1;
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 3;
  } while (iVar2 < 0x96);
  *(undefined1 *)(param_1 + 0x762) = 0xff;
  *(undefined1 *)(param_1 + 0x763) = 0;
  *(undefined1 *)(param_1 + 0x764) = 1;
  *(undefined1 *)(param_1 + 0x765) = 0;
  return;
}

