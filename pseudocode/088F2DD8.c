/* Entry 0x088F2DD8 | file offset 0x000EFDB0 | FUN_088f2dd8 | bytes 144 */

void FUN_088f2dd8(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 0;
  param_1 = param_1 + param_2 * 0x5bc;
  puVar2 = (undefined4 *)(param_1 + 0x438);
  *puVar2 = 0;
  *(undefined4 *)(param_1 + 0x43c) = 0;
  *(undefined4 *)(param_1 + 0x440) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x446) = 0;
  *(undefined2 *)(param_1 + 0x444) = 0;
  *(undefined4 *)(param_1 + 0x44c) = 0;
  do {
    *(undefined1 *)((int)puVar2 + iVar1 + 0x18) = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x2ab);
  iVar1 = 0;
  do {
    *(undefined1 *)((int)puVar2 + iVar1 + 0x2c3) = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x276);
  iVar1 = 0;
  do {
    *(undefined1 *)((int)puVar2 + 0x539) = 0xff;
    *(undefined1 *)((int)puVar2 + 0x53a) = 0xff;
    iVar1 = iVar1 + 1;
    puVar2 = (undefined4 *)((int)puVar2 + 2);
  } while (iVar1 < 0x40);
  return;
}

