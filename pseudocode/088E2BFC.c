/* Entry 0x088E2BFC | file offset 0x000DFBD4 | FUN_088e2bfc | bytes 472 */

void FUN_088e2bfc(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = param_1;
  do {
    if ((*(int *)(iVar2 + 0x394) != 0) && (*(int *)(iVar2 + 0x394) != 0)) {
      FUN_0887ba5c();
      *(undefined4 *)(iVar2 + 0x394) = 0;
    }
    iVar1 = iVar1 + 1;
    iVar2 = iVar2 + 4;
  } while (iVar1 < 100);
  iVar1 = 0;
  iVar2 = param_1;
  do {
    if ((*(int *)(iVar2 + 0x5ec) != 0) && (*(int *)(iVar2 + 0x5ec) != 0)) {
      FUN_0887ba5c();
      *(undefined4 *)(iVar2 + 0x5ec) = 0;
    }
    iVar1 = iVar1 + 1;
    iVar2 = iVar2 + 4;
  } while (iVar1 < 4);
  iVar1 = 0;
  iVar2 = param_1;
  do {
    if ((*(int *)(iVar2 + 0x5fc) != 0) && (*(int *)(iVar2 + 0x5fc) != 0)) {
      FUN_0887ba5c();
      *(undefined4 *)(iVar2 + 0x5fc) = 0;
    }
    iVar1 = iVar1 + 1;
    iVar2 = iVar2 + 4;
  } while (iVar1 < 2);
  iVar1 = 0;
  iVar2 = param_1;
  do {
    if ((*(int *)(iVar2 + 0x604) != 0) && (*(int *)(iVar2 + 0x604) != 0)) {
      FUN_0887ba5c();
      *(undefined4 *)(iVar2 + 0x604) = 0;
    }
    iVar1 = iVar1 + 1;
    iVar2 = iVar2 + 4;
  } while (iVar1 < 10);
  iVar1 = 0;
  iVar2 = param_1;
  do {
    if ((*(int *)(iVar2 + 0x62c) != 0) && (*(int *)(iVar2 + 0x62c) != 0)) {
      FUN_0887ba5c();
      *(undefined4 *)(iVar2 + 0x62c) = 0;
    }
    iVar1 = iVar1 + 1;
    iVar2 = iVar2 + 4;
  } while (iVar1 < 4);
  iVar1 = 0;
  iVar2 = param_1;
  do {
    if ((*(int *)(iVar2 + 0x63c) != 0) && (*(int *)(iVar2 + 0x63c) != 0)) {
      FUN_0887ba5c();
      *(undefined4 *)(iVar2 + 0x63c) = 0;
    }
    iVar1 = iVar1 + 1;
    iVar2 = iVar2 + 4;
  } while (iVar1 < 2);
  if ((*(int *)(param_1 + 0x658) != 0) && (*(int *)(param_1 + 0x658) != 0)) {
    FUN_0887ba5c();
    *(undefined4 *)(param_1 + 0x658) = 0;
  }
  iVar2 = 0;
  do {
    if ((*(int *)(param_1 + 0x65c) != 0) && (*(int *)(param_1 + 0x65c) != 0)) {
      FUN_0887ba5c();
      *(undefined4 *)(param_1 + 0x65c) = 0;
    }
    iVar2 = iVar2 + 1;
    param_1 = param_1 + 4;
  } while (iVar2 < 4);
  return;
}

