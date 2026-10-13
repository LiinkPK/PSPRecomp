/* Entry 0x08973650 | file offset 0x00170628 | FUN_08973650 | bytes 100 */

void FUN_08973650(int *param_1)

{
  int iVar1;
  int local_20;
  undefined1 auStack_1c [4];
  undefined1 auStack_18 [4];
  
  if ((char)param_1[0x11] == '\x01') {
    sceDisplayGetFrameBuf(&local_20,auStack_1c,auStack_18,0);
    iVar1 = param_1[0xe];
    if (local_20 == iVar1) {
      *param_1 = iVar1;
      param_1[1] = param_1[0xd];
    }
    else {
      *param_1 = param_1[0xd];
      param_1[1] = iVar1;
    }
  }
  return;
}

