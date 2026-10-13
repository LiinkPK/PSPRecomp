/* Entry 0x08869CA0 | file offset 0x00066C78 | FUN_08869ca0 | bytes 164 */

void FUN_08869ca0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  puVar1 = (undefined4 *)(param_1 + 4);
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 4;
  } while (iVar2 < 8);
  *(undefined1 *)(param_1 + 0x8c) = 0;
  *(undefined1 *)(param_1 + 0x8d) = 0xff;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  iVar3 = 0;
  iVar2 = param_1;
  do {
    *(undefined4 *)(iVar2 + 0x94) = 0;
    *(undefined4 *)(iVar2 + 0x9c) = 0;
    *(undefined4 *)(iVar2 + 0x120) = 0;
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 4;
  } while (iVar3 < 2);
  iVar3 = 0;
  iVar2 = param_1;
  do {
    *(undefined4 *)(iVar2 + 0xa4) = 0xffffffff;
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 4;
  } while (iVar3 < 0x19);
  *(undefined1 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x134) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  return;
}

