/* Entry 0x088E39D4 | file offset 0x000E09AC | FUN_088e39d4 | bytes 576 */

void FUN_088e39d4(undefined4 *param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  *param_1 = param_2;
  if (param_3 == '\0') {
    param_1[1] = 0;
  }
  iVar1 = 0;
  puVar2 = param_1 + 0x58;
  do {
    *(undefined2 *)puVar2 = 0xffff;
    *(undefined2 *)((int)puVar2 + 2) = 0xffff;
    puVar2[1] = 0;
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 2;
  } while (iVar1 < 0x40);
  *(undefined2 *)(param_1 + 0xd8) = 0xffff;
  *(undefined2 *)((int)param_1 + 0x362) = 0xffff;
  param_1[0xd9] = 0;
  *(undefined2 *)(param_1 + 0xda) = 0xffff;
  *(undefined2 *)((int)param_1 + 0x36a) = 0xffff;
  param_1[0xdb] = 0;
  *(undefined2 *)(param_1 + 0xdc) = 0xffff;
  *(undefined2 *)((int)param_1 + 0x372) = 0xffff;
  param_1[0xdd] = 0;
  iVar1 = 0;
  puVar2 = param_1;
  do {
    puVar2[0xde] = 0xffffffff;
    puVar2[0xe1] = 0xffffffff;
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar1 < 3);
  iVar1 = 0;
  puVar2 = param_1;
  puVar3 = param_1;
  do {
    puVar2[0xe5] = 0;
    *(undefined2 *)(puVar3 + 0x149) = 0xffff;
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 1;
    puVar3 = (undefined4 *)((int)puVar3 + 2);
  } while (iVar1 < 100);
  iVar1 = 0;
  puVar2 = param_1;
  do {
    puVar2[0x17b] = 0;
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar1 < 4);
  param_1[0x19f] = 0;
  param_1[0x1a0] = 0;
  iVar1 = 0;
  puVar2 = param_1;
  do {
    puVar2[0x17f] = 0;
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar1 < 2);
  iVar1 = 0;
  puVar2 = param_1;
  puVar3 = param_1;
  do {
    puVar2[0x181] = 0;
    *(undefined2 *)(puVar3 + 0x191) = 0xffff;
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 1;
    puVar3 = (undefined4 *)((int)puVar3 + 2);
  } while (iVar1 < 10);
  iVar1 = 0;
  puVar2 = param_1;
  do {
    puVar2[0x18b] = 0;
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar1 < 4);
  iVar1 = 0;
  puVar2 = param_1;
  do {
    puVar2[399] = 0;
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar1 < 2);
  param_1[0x196] = 0;
  iVar1 = 0;
  puVar2 = param_1;
  do {
    puVar2[0x197] = 0;
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar1 < 4);
  param_1[0x1a1] = 0;
  param_1[0x1a2] = 0;
  param_1[0x1a3] = 0;
  param_1[0x1a4] = 0;
  if (param_3 == '\0') {
    iVar1 = 0;
    puVar2 = param_1;
    do {
      puVar2[2] = 0;
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar1 < 0x15);
    param_1[0x17] = 0;
    param_1[0xe4] = 0;
    param_1[0x19b] = 0;
    param_1[0x19c] = 0;
    param_1[0x19d] = 0x100000;
    param_1[0x19e] = 0;
    iVar1 = 0;
    puVar2 = param_1;
    do {
      puVar2[0x18] = 0;
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar1 < 0x40);
    param_1[0x1a5] = 0;
    param_1[0x1a6] = 0;
    param_1[0x1a7] = 0;
    param_1[0x1a8] = 0;
    param_1[0x1a9] = 0;
    iVar1 = 0;
    puVar2 = param_1 + 0x1aa;
    do {
      iVar4 = 0;
      puVar3 = puVar2;
      do {
        *puVar3 = 0;
        puVar3[8] = 0;
        iVar4 = iVar4 + 1;
        puVar3 = puVar3 + 1;
      } while (iVar4 < 8);
      *(undefined1 *)(puVar2 + 0x10) = 0;
      *(undefined1 *)((int)puVar2 + 0x41) = 0;
      *(undefined1 *)((int)puVar2 + 0x43) = 0;
      *(undefined1 *)((int)puVar2 + 0x42) = 0;
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 0x11;
    } while (iVar1 < 4);
    param_1[0x1ee] = 0xffffffff;
  }
  return;
}

