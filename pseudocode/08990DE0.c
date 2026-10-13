/* Entry 0x08990DE0 | file offset 0x0018DDB8 | FUN_08990de0 | bytes 104 */

undefined1 FUN_08990de0(int param_1)

{
  undefined1 uVar1;
  
  sceKernelWaitSema(*(undefined4 *)(DAT_089da420 + 0x2c),1,0);
  uVar1 = *(undefined1 *)(DAT_089da420 + param_1 * 0x3c + 0x1a8);
  sceKernelSignalSema(*(undefined4 *)(DAT_089da420 + 0x2c),1);
  return uVar1;
}

