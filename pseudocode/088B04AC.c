/* Entry 0x088B04AC | file offset 0x000AD484 | FUN_088b04ac | bytes 680 */

void FUN_088b04ac(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 8) = param_3;
  *(int *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_4;
  *(undefined4 *)(param_1 + 0x14) = param_5;
  FUN_08935828(param_2 + 0x7e4,0,0x600);
  FUN_08935828(*(int *)(param_1 + 0xc) + 0xde4,0,0x14);
  FUN_088aefa0(param_1);
  *(int *)(*(int *)(param_1 + 0xc) + 0xdf4) = *(int *)(param_1 + 0xc) + 0x2ab0;
  *(int *)(*(int *)(param_1 + 0xc) + 0xdb4) = *(int *)(param_1 + 0xc) + 0xdf8;
  *(int *)(*(int *)(param_1 + 0xc) + 0xdb8) = *(int *)(param_1 + 0xc) + 0xe0c;
  *(int *)(*(int *)(param_1 + 0xc) + 0xdbc) = *(int *)(param_1 + 0xc) + 0xe4c;
  *(int *)(*(int *)(param_1 + 0xc) + 0xda8) = *(int *)(param_1 + 0xc) + 0xde4;
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x85c) =
       *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x2b88);
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x860) =
       *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x2b88);
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x858) = *(undefined4 *)(param_1 + 0x10);
  FUN_08935bb4(*(int *)(param_1 + 0xc) + 0x848,*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x2b8c),0xd
              );
  FUN_08935524(*(int *)(param_1 + 0xc) + 0xdc0,*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x2b94),
               0x10);
  *(undefined1 *)(*(int *)(param_1 + 0xc) + 0x830) = 0;
  FUN_08935828(*(undefined4 *)(param_1 + 0xc),0,0x7e4);
  FUN_08935828(*(int *)(param_1 + 0xc) + 0xe68,0,0xc);
  FUN_08935828(*(int *)(param_1 + 0xc) + 0xe74,0,0x1c20);
  *(int *)(*(int *)(param_1 + 0xc) + 0xdd8) = *(int *)(param_1 + 0xc) + 0xe68;
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0xe68) = 100;
  *(int *)(*(int *)(param_1 + 0xc) + 0xe70) = *(int *)(param_1 + 0xc) + 0xe74;
  *(undefined1 *)(*(int *)(param_1 + 0xc) + 0x2b54) = 0;
  iVar3 = 0;
  iVar1 = *(int *)(param_1 + 0xc);
  iVar2 = 0;
  do {
    FUN_08935bb4(iVar1 + iVar2,*(undefined4 *)(iVar1 + 0x2b90),0x14);
    iVar1 = FUN_089359e8(*(int *)(param_1 + 0xc) + iVar2);
    FUN_0893476c(*(int *)(param_1 + 0xc) + iVar2 + iVar1,&DAT_089cb700,iVar3);
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 0x14;
    iVar1 = *(int *)(param_1 + 0xc);
  } while (iVar3 < 100);
  *(undefined1 *)(iVar1 + 2000) = 0;
  iVar1 = *(int *)(param_1 + 0xc);
  *(int *)(iVar1 + 0x844) = iVar1;
  FUN_08935bb4(iVar1 + 0x2b40,*(undefined4 *)(iVar1 + 0x2b90),0x14);
  iVar1 = FUN_089359e8(*(int *)(param_1 + 0xc) + 0x2b40);
  *(undefined1 *)(*(int *)(param_1 + 0xc) + iVar1 + 0x2b40) = 0x2a;
  *(undefined1 *)(*(int *)(param_1 + 0xc) + iVar1 + 0x2b41) = 0;
  FUN_088adb10(DAT_089d712c,*(int *)(param_1 + 0xc) + 0x7e4);
  FUN_088adf68(DAT_089d712c,*(int *)(param_1 + 0xc) + 0xd68,0,0);
  FUN_088adf68(DAT_089d712c,*(undefined4 *)(*(int *)(param_1 + 0xc) + 0xda8),0,0);
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x860) =
       *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x2b88);
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x2b64) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x2b6c) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0xc) + 0x2b7f) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x2b74) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x2b78) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x2b70) = 0;
  iVar1 = *(int *)(param_1 + 0xc);
  *(undefined4 *)(iVar1 + 0x2b5c) = 0;
  *(undefined4 *)(iVar1 + 0x2b58) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0xc) + 0x2b80) = 0;
  return;
}

