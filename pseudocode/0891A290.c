/* Entry 0x0891A290 | file offset 0x00117268 | FUN_0891a290 | bytes 340 */

void FUN_0891a290(undefined1 *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined1 *puVar6;
  
  *param_1 = 0;
  param_1[1] = 0xff;
  param_1[2] = 0xff;
  param_1[3] = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined2 *)(param_1 + 0x44) = 0xffff;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  iVar1 = 0;
  puVar2 = param_1 + 0x24a0;
  do {
    FUN_0891a284(puVar2);
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 0x24;
  } while (iVar1 < 4);
  iVar1 = 0;
  puVar2 = param_1 + 0x2530;
  do {
    FUN_0891a284(puVar2);
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 0x24;
  } while (iVar1 < 4);
  iVar1 = 0;
  puVar3 = param_1 + 0x48;
  puVar4 = param_1 + 0x2728;
  puVar2 = param_1;
  do {
    FUN_0891a110(puVar3);
    FUN_0891a284(puVar4);
    iVar5 = 0;
    puVar6 = puVar2 + 0x25c0;
    do {
      FUN_0891a284(puVar6);
      iVar5 = iVar5 + 1;
      puVar6 = puVar6 + 0x24;
    } while (iVar5 < 5);
    iVar1 = iVar1 + 1;
    puVar3 = puVar3 + 0xea8;
    puVar4 = puVar4 + 0x24;
    puVar2 = puVar2 + 0xb4;
  } while (iVar1 < 2);
  iVar1 = 0;
  puVar2 = param_1 + 0x1d98;
  do {
    FUN_0891a15c(puVar2);
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 0x168;
  } while (iVar1 < 5);
  FUN_0891a1a0(param_1 + 0x2770);
  FUN_0891a1f4(param_1 + 0x2794);
  FUN_0891a21c(param_1 + 0x279c);
  FUN_0891a244(param_1 + 0x27b0);
  FUN_0891a254(param_1 + 0x27b4);
  return;
}

