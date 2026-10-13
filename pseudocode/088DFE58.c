/* Entry 0x088DFE58 | file offset 0x000DCE30 | FUN_088dfe58 | bytes 544 */

void FUN_088dfe58(undefined4 *param_1,char param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  *param_1 = 0;
  if (param_2 == '\0') {
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[0x58b] = 0;
    param_1[0x58c] = 0;
    param_1[0x5c2] = 0xffffffff;
    param_1[4] = 0;
  }
  iVar2 = 0;
  puVar1 = param_1 + 5;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[3] = 0;
    *(undefined2 *)(puVar1 + 4) = 0;
    *(undefined2 *)((int)puVar1 + 0x12) = 0;
    *(undefined1 *)(puVar1 + 7) = 0;
    *(undefined2 *)(puVar1 + 5) = 0;
    *(char *)((int)puVar1 + 0x1d) = (char)iVar2;
    puVar1[6] = 0;
    *(undefined1 *)((int)puVar1 + 0x1e) = 0;
    *(undefined1 *)((int)puVar1 + 0x1f) = 0;
    *(undefined1 *)(puVar1 + 8) = 0;
    *(undefined1 *)((int)puVar1 + 0x21) = 0;
    *(undefined1 *)((int)puVar1 + 0x22) = 0;
    *(undefined1 *)((int)puVar1 + 0x23) = 0;
    *(undefined1 *)(puVar1 + 9) = 0;
    *(undefined1 *)((int)puVar1 + 0x25) = 0;
    *(undefined1 *)((int)puVar1 + 0x26) = 0;
    *(undefined1 *)((int)puVar1 + 0x27) = 0;
    *(undefined1 *)(puVar1 + 10) = 0;
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 0xb;
  } while (iVar2 < 0x1e);
  iVar2 = 0;
  puVar1 = param_1;
  do {
    puVar1[0x58e] = 0xffffffff;
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 1;
  } while (iVar2 < 0x10);
  iVar2 = 0;
  puVar1 = param_1;
  do {
    puVar1[0x14f] = 0;
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 1;
  } while (iVar2 < 0x20);
  iVar2 = 0;
  puVar1 = param_1;
  do {
    *(undefined2 *)(puVar1 + 0x5b0) = 0xffff;
    iVar2 = iVar2 + 1;
    puVar1 = (undefined4 *)((int)puVar1 + 2);
  } while (iVar2 < 0x20);
  param_1[0x5c0] = 0;
  param_1[0x5c1] = 0;
  param_1[3] = 0;
  param_1[0x59e] = 0xffffffff;
  param_1[0x59f] = 0xffffffff;
  *(undefined1 *)((int)param_1 + 0x17af) = 0;
  *(undefined1 *)(param_1 + 0x5ec) = 0;
  *(undefined1 *)((int)param_1 + 0x17b1) = 0;
  *(undefined1 *)((int)param_1 + 0x17b2) = 0;
  *(undefined1 *)((int)param_1 + 0x17b3) = 0;
  *(undefined1 *)(param_1 + 0x5ed) = 0;
  *(undefined1 *)((int)param_1 + 0x17b5) = 0;
  *(undefined1 *)((int)param_1 + 0x17b6) = 1;
  *(undefined1 *)((int)param_1 + 0x17b7) = 0;
  *(undefined1 *)(param_1 + 0x5ee) = 1;
  *(undefined1 *)((int)param_1 + 0x17b9) = 0;
  *(undefined1 *)((int)param_1 + 0x17be) = 0;
  *(undefined1 *)((int)param_1 + 0x17bb) = 0;
  *(undefined1 *)((int)param_1 + 0x17bf) = 0;
  *(undefined1 *)(param_1 + 0x5ef) = 0;
  iVar2 = 0;
  puVar1 = param_1;
  do {
    puVar1[0x5c3] = 0;
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 1;
  } while (iVar2 < 0x14);
  *(undefined2 *)(param_1 + 0x5eb) = 0;
  *(undefined1 *)((int)param_1 + 0x17ae) = 0;
  FUN_088e39d4(param_1 + 0x16f);
  FUN_088e5b38(param_1 + 0x35f,param_2);
  FUN_088e6e4c(param_1 + 0x380,param_1,param_2);
  FUN_088e8230(param_1 + 0x488,param_2);
  FUN_088ea794(param_1 + 0x4a3);
  FUN_088e66e8(param_1 + 0x4ac,param_2);
  FUN_088eaa58(param_1 + 0x4b6,param_2);
  FUN_088ea310(param_1 + 0x4d7,param_1 + 0x16f);
  FUN_088738b8(param_1 + 0x4f0);
  FUN_088e0970(param_1 + 0x580);
  FUN_08874af8();
  return;
}

