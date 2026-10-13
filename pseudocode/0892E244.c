/* Entry 0x0892E244 | file offset 0x0012B21C | FUN_0892e244 | bytes 128 */

void FUN_0892e244(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  FUN_0892db68(param_1);
  *(undefined4 *)(param_1 + 0xe0) = 0;
  iVar2 = 0;
  puVar1 = (undefined4 *)(param_1 + 0x48);
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0xffffffff;
    puVar1[3] = 0xffffffff;
    puVar1[4] = 0xffffffff;
    puVar1[5] = 0;
    puVar1[6] = 0;
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 7;
  } while (iVar2 < 5);
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  return;
}

